/*
  Analog in to Web Server - MAKE, 2009
  
  Read the value of an analog input and display it on the screen.
*/

#include "config.h"
#include "appled.h"
#include "webserver.h"

int HomePageHandler( char* requestType, char* address, char* requestBuffer, 
                      int requestMaxSize, void* socket, char* buffer, int len );
int DataHandler( char* requestType, char* address, char* requestBuffer, 
                      int requestMaxSize, void* socket, char* buffer, int len );
void BlinkTask( void* p );

void Run( ) // this gets called as soon as we boot up.
{
  TaskCreate( BlinkTask, "Blink", 1000, 0, 3 );
  
  Network_SetActive(true); // turn on the network system
  Network_SetAddress( 192, 168, 0, 200 ); // Change if needed
  WebServer_SetActive(true); // fire up our webserver
  WebServer_Route("/data", DataHandler); 
  WebServer_Route("/home", HomePageHandler); 
}

int DataHandler( char* requestType, char* address, char* requestBuffer, 
                      int requestMaxSize, void* socket, char* buffer, int len )
{
  (void)requestType; // unused parameter
  (void)address; // unused parameter
  (void)len; // unused parameter
  (void)requestBuffer; // unused parameter
  (void)requestMaxSize; // unused parameter

  int ain;
  char temp[100];
  
  ain = AnalogIn_GetValue(0); // read the analog in value
  buffer[0] = '\0';
//  strcat( buffer, "\r\n");
  sprintf(temp, "%d %%\r\n", ((ain) * 100)/1023);
  strcat( buffer, temp);
  
  // Write out the dynamically generated page.
  if( !SocketWrite( socket, buffer, strlen( buffer ) ) )
    return 0 ;
  return 1;
}


int HomePageHandler( char* requestType, char* address, char* requestBuffer, 
                      int requestMaxSize, void* socket, char* buffer, int len )
{
  (void)address; // unused parameter
  (void)len; // unused parameter
  (void)requestBuffer; // unused parameter
  (void)requestMaxSize; // unused parameter
  (void)requestType; // unused parameter
    
  if( !WebServer_WriteResponseOkHTML( socket ) )
    return 0;

  buffer[0] = '\0';
  strcat( buffer, "<script type=\"text/javascript\">\r\n");
  strcat( buffer, "function Ajax(){\r\n");
  strcat( buffer, "var xmlHttp = new XMLHttpRequest();\r\n");
  strcat( buffer, "xmlHttp.onreadystatechange = function(){\r\n");
  strcat( buffer, " if(xmlHttp.readyState==4){\r\n");
  if( !SocketWrite( socket, buffer, strlen( buffer ) ) )
    return 0 ;

  buffer[0] = '\0';  
  strcat( buffer, "  document.getElementById('ReloadThis').innerHTML=xmlHttp.responseText;\r\n");
  strcat( buffer, "  setTimeout('Ajax()',100);\r\n");
  strcat( buffer, " }\r\n");
  strcat( buffer, "}\r\n");
  if( !SocketWrite( socket, buffer, strlen( buffer ) ) )
    return 0 ;

  buffer[0] = '\0';  
  strcat( buffer, "xmlHttp.open(\"GET\",\"/data\",true);\r\n");
  strcat( buffer, "xmlHttp.send(null);\r\n");
  strcat( buffer, "}\r\n");
  strcat( buffer, "window.onload=function(){\r\n");
  strcat( buffer, " setTimeout('Ajax()',100);\r\n");
  strcat( buffer, "}\r\n");
  strcat( buffer, "</script>\r\n");
  if( !SocketWrite( socket, buffer, strlen( buffer ) ) )
    return 0 ;

  buffer[0] = '\0';  
  strcat( buffer, "<img src=\"http://www.makershed.com/v/vspfiles/photos/MKMT2-2.jpg\" align=\"right\"><p/>\r\n");
  strcat( buffer, "<p style=\"font-family: verdana\">\r\n");
  strcat( buffer, "The Make Controller is built around the AT91SAM7X256, and adds the essential components (like the crystal, voltage regulator, filter capacitors, etc.) required to run it, while bringing almost all the processor's signal lines out to standard 0.1\" spaced sockets. The software environment remains constant no matter what you plug the Make Controller into - the firmware libraries are organized and documented, making it clear which are compatible with the Controller and Application boards.</p>\r\n");
  if( !SocketWrite( socket, buffer, strlen( buffer ) ) )
    return 0 ;

  buffer[0] = '\0';  
  strcat( buffer, "Get the source for this demo: <a href=\"http://bit.ly/MCAjax\">http://bit.ly/MCAjax</a><p/>\r\n");
  if( !SocketWrite( socket, buffer, strlen( buffer ) ) )
    return 0 ;
 
  buffer[0] = '\0';     
  strcat( buffer, "<hr> <p style=\"font-family: verdana; font-size: 36px\">Turn the knob!</p>");
  strcat( buffer, "<div id=\"ReloadThis\" style=\"font-size: 80px; font-family: verdana; width: 40%; border-style: dotted; border-width: .1em; text-align: center;\">Waiting for data...</div>\r\n");
  if( !SocketWrite( socket, buffer, strlen( buffer ) ) )
    return 0 ;
    
  return 1;
}

void BlinkTask( void* p )
{
  (void)p; // unused variable

  while( true ) // forever...
  {
    Led_SetState(0);
    Sleep(990);
    Led_SetState(1);
    Sleep(10);
  }
}


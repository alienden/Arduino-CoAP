#ifndef APP_H
#define APP_H

#include <Arduino.h>
#include <coap.h>

// your app must have an init function where your resource is registered in coap
// callback functions must be char* function(uint8_t method)
// with method you can implement different operations for GET/PUT/POST/DELETE requests

class App
{
   public:
      void init( Coap* coap, resource_t* resources, uint8_t rid, char* data );
      char* get_temp( uint8_t rid, uint8_t method );
      char* temp_status( uint8_t rid, uint8_t method );
      char* change_observe_timer(uint8_t rid, uint8_t method );
      char* debug_info(uint8_t rid, uint8_t method );
   private:
       uint8_t ledState;
      Coap* coap_;
      resource_t* resources_;
      char* data_;
};
#endif

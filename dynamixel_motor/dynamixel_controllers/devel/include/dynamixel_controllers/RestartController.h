/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/fujenchu/catkin_ws/src/dynamixel_motor/dynamixel_controllers/srv/RestartController.srv
 *
 */


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_RESTARTCONTROLLER_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_RESTARTCONTROLLER_H

#include <ros/service_traits.h>


#include <dynamixel_controllers/RestartControllerRequest.h>
#include <dynamixel_controllers/RestartControllerResponse.h>


namespace dynamixel_controllers
{

struct RestartController
{

typedef RestartControllerRequest Request;
typedef RestartControllerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RestartController
} // namespace dynamixel_controllers


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dynamixel_controllers::RestartController > {
  static const char* value()
  {
    return "94c76c2df56346fcaa2611bdac54f434";
  }

  static const char* value(const ::dynamixel_controllers::RestartController&) { return value(); }
};

template<>
struct DataType< ::dynamixel_controllers::RestartController > {
  static const char* value()
  {
    return "dynamixel_controllers/RestartController";
  }

  static const char* value(const ::dynamixel_controllers::RestartController&) { return value(); }
};


// service_traits::MD5Sum< ::dynamixel_controllers::RestartControllerRequest> should match 
// service_traits::MD5Sum< ::dynamixel_controllers::RestartController > 
template<>
struct MD5Sum< ::dynamixel_controllers::RestartControllerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_controllers::RestartController >::value();
  }
  static const char* value(const ::dynamixel_controllers::RestartControllerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_controllers::RestartControllerRequest> should match 
// service_traits::DataType< ::dynamixel_controllers::RestartController > 
template<>
struct DataType< ::dynamixel_controllers::RestartControllerRequest>
{
  static const char* value()
  {
    return DataType< ::dynamixel_controllers::RestartController >::value();
  }
  static const char* value(const ::dynamixel_controllers::RestartControllerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dynamixel_controllers::RestartControllerResponse> should match 
// service_traits::MD5Sum< ::dynamixel_controllers::RestartController > 
template<>
struct MD5Sum< ::dynamixel_controllers::RestartControllerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_controllers::RestartController >::value();
  }
  static const char* value(const ::dynamixel_controllers::RestartControllerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_controllers::RestartControllerResponse> should match 
// service_traits::DataType< ::dynamixel_controllers::RestartController > 
template<>
struct DataType< ::dynamixel_controllers::RestartControllerResponse>
{
  static const char* value()
  {
    return DataType< ::dynamixel_controllers::RestartController >::value();
  }
  static const char* value(const ::dynamixel_controllers::RestartControllerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_RESTARTCONTROLLER_H

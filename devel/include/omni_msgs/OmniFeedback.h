// Generated by gencpp from file omni_msgs/OmniFeedback.msg
// DO NOT EDIT!


#ifndef OMNI_MSGS_MESSAGE_OMNIFEEDBACK_H
#define OMNI_MSGS_MESSAGE_OMNIFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace omni_msgs
{
template <class ContainerAllocator>
struct OmniFeedback_
{
  typedef OmniFeedback_<ContainerAllocator> Type;

  OmniFeedback_()
    : force()
    , position()  {
    }
  OmniFeedback_(const ContainerAllocator& _alloc)
    : force(_alloc)
    , position(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_type;
  _force_type force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::omni_msgs::OmniFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::omni_msgs::OmniFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct OmniFeedback_

typedef ::omni_msgs::OmniFeedback_<std::allocator<void> > OmniFeedback;

typedef boost::shared_ptr< ::omni_msgs::OmniFeedback > OmniFeedbackPtr;
typedef boost::shared_ptr< ::omni_msgs::OmniFeedback const> OmniFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::omni_msgs::OmniFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::omni_msgs::OmniFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace omni_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': True, 'HasHeader': False}
// {'omni_msgs': ['/home/andy/eye_op_robot_mixed/src/omni_packages/omni_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omni_msgs::OmniFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omni_msgs::OmniFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omni_msgs::OmniFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e9083ac4fd95494e94fbb0c0f90b6c00";
  }

  static const char* value(const ::omni_msgs::OmniFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe9083ac4fd95494eULL;
  static const uint64_t static_value2 = 0x94fbb0c0f90b6c00ULL;
};

template<class ContainerAllocator>
struct DataType< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "omni_msgs/OmniFeedback";
  }

  static const char* value(const ::omni_msgs::OmniFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is the force as estimated from the applied torques as well as the\n\
# current end effector position of the robot arm\n\
geometry_msgs/Vector3  force\n\
geometry_msgs/Vector3  position\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::omni_msgs::OmniFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.force);
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OmniFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::omni_msgs::OmniFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::omni_msgs::OmniFeedback_<ContainerAllocator>& v)
  {
    s << indent << "force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OMNI_MSGS_MESSAGE_OMNIFEEDBACK_H

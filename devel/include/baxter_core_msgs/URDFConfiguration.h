// Generated by gencpp from file baxter_core_msgs/URDFConfiguration.msg
// DO NOT EDIT!


#ifndef BAXTER_CORE_MSGS_MESSAGE_URDFCONFIGURATION_H
#define BAXTER_CORE_MSGS_MESSAGE_URDFCONFIGURATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct URDFConfiguration_
{
  typedef URDFConfiguration_<ContainerAllocator> Type;

  URDFConfiguration_()
    : time()
    , link()
    , joint()
    , urdf()  {
    }
  URDFConfiguration_(const ContainerAllocator& _alloc)
    : time()
    , link(_alloc)
    , joint(_alloc)
    , urdf(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _time_type;
  _time_type time;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _link_type;
  _link_type link;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joint_type;
  _joint_type joint;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _urdf_type;
  _urdf_type urdf;




  typedef boost::shared_ptr< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> const> ConstPtr;

}; // struct URDFConfiguration_

typedef ::baxter_core_msgs::URDFConfiguration_<std::allocator<void> > URDFConfiguration;

typedef boost::shared_ptr< ::baxter_core_msgs::URDFConfiguration > URDFConfigurationPtr;
typedef boost::shared_ptr< ::baxter_core_msgs::URDFConfiguration const> URDFConfigurationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'baxter_core_msgs': ['/root/baxter_ws/src/baxter_common/baxter_core_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0c7028d878027820eed2aa0cbf1f5e4a";
  }

  static const char* value(const ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0c7028d878027820ULL;
  static const uint64_t static_value2 = 0xeed2aa0cbf1f5e4aULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/URDFConfiguration";
  }

  static const char* value(const ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## URDF Configuration\n\
time time      # time the message was created, serves as a sequence number\n\
               # time should be changed only when the content changes.\n\
string link    # parent link name\n\
string joint   # joint to configure\n\
               # link + joint + time uniquely identifies a configuration.\n\
string urdf    # XML or JSON-encoded URDF data.  This should be a URDF fragment\n\
               # describing the entire subtree for the given joint attached\n\
               # to the given parent link. If this field is empty the joint\n\
               # is removed from the parent link.\n\
";
  }

  static const char* value(const ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.link);
      stream.next(m.joint);
      stream.next(m.urdf);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct URDFConfiguration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::URDFConfiguration_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time);
    s << indent << "link: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link);
    s << indent << "joint: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint);
    s << indent << "urdf: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.urdf);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_URDFCONFIGURATION_H

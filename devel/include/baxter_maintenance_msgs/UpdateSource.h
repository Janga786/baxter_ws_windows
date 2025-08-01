// Generated by gencpp from file baxter_maintenance_msgs/UpdateSource.msg
// DO NOT EDIT!


#ifndef BAXTER_MAINTENANCE_MSGS_MESSAGE_UPDATESOURCE_H
#define BAXTER_MAINTENANCE_MSGS_MESSAGE_UPDATESOURCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_maintenance_msgs
{
template <class ContainerAllocator>
struct UpdateSource_
{
  typedef UpdateSource_<ContainerAllocator> Type;

  UpdateSource_()
    : devname()
    , filename()
    , version()
    , uuid()  {
    }
  UpdateSource_(const ContainerAllocator& _alloc)
    : devname(_alloc)
    , filename(_alloc)
    , version(_alloc)
    , uuid(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _devname_type;
  _devname_type devname;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _version_type;
  _version_type version;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uuid_type;
  _uuid_type uuid;




  typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> const> ConstPtr;

}; // struct UpdateSource_

typedef ::baxter_maintenance_msgs::UpdateSource_<std::allocator<void> > UpdateSource;

typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateSource > UpdateSourcePtr;
typedef boost::shared_ptr< ::baxter_maintenance_msgs::UpdateSource const> UpdateSourceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_maintenance_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'baxter_maintenance_msgs': ['/root/baxter_ws/src/baxter_common/baxter_maintenance_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88ad69e3ed4d619e167c9d83e6d9310f";
  }

  static const char* value(const ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88ad69e3ed4d619eULL;
  static const uint64_t static_value2 = 0x167c9d83e6d9310fULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_maintenance_msgs/UpdateSource";
  }

  static const char* value(const ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string  devname\n\
string  filename\n\
string  version\n\
string  uuid\n\
";
  }

  static const char* value(const ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.devname);
      stream.next(m.filename);
      stream.next(m.version);
      stream.next(m.uuid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UpdateSource_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_maintenance_msgs::UpdateSource_<ContainerAllocator>& v)
  {
    s << indent << "devname: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.devname);
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
    s << indent << "version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.version);
    s << indent << "uuid: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uuid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_MAINTENANCE_MSGS_MESSAGE_UPDATESOURCE_H

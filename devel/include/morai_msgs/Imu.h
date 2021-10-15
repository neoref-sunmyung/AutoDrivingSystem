// Generated by gencpp from file morai_msgs/Imu.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_IMU_H
#define MORAI_MSGS_MESSAGE_IMU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace morai_msgs
{
template <class ContainerAllocator>
struct Imu_
{
  typedef Imu_<ContainerAllocator> Type;

  Imu_()
    : yaw(0.0)
    , pitch(0.0)
    , roll(0.0)  {
    }
  Imu_(const ContainerAllocator& _alloc)
    : yaw(0.0)
    , pitch(0.0)
    , roll(0.0)  {
  (void)_alloc;
    }



   typedef double _yaw_type;
  _yaw_type yaw;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _roll_type;
  _roll_type roll;





  typedef boost::shared_ptr< ::morai_msgs::Imu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::Imu_<ContainerAllocator> const> ConstPtr;

}; // struct Imu_

typedef ::morai_msgs::Imu_<std::allocator<void> > Imu;

typedef boost::shared_ptr< ::morai_msgs::Imu > ImuPtr;
typedef boost::shared_ptr< ::morai_msgs::Imu const> ImuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::Imu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::Imu_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::Imu_<ContainerAllocator1> & lhs, const ::morai_msgs::Imu_<ContainerAllocator2> & rhs)
{
  return lhs.yaw == rhs.yaw &&
    lhs.pitch == rhs.pitch &&
    lhs.roll == rhs.roll;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::Imu_<ContainerAllocator1> & lhs, const ::morai_msgs::Imu_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::Imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::Imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::Imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::Imu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::Imu_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6483fb20acb1cba981c486a35a1bdbd";
  }

  static const char* value(const ::morai_msgs::Imu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6483fb20acb1cbaULL;
  static const uint64_t static_value2 = 0x981c486a35a1bdbdULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/Imu";
  }

  static const char* value(const ::morai_msgs::Imu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::Imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 yaw\n"
"float64 pitch\n"
"float64 roll\n"
;
  }

  static const char* value(const ::morai_msgs::Imu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::Imu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.yaw);
      stream.next(m.pitch);
      stream.next(m.roll);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Imu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::Imu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::Imu_<ContainerAllocator>& v)
  {
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_IMU_H
// Generated by gencpp from file hmi_qt/HmiStatus.msg
// DO NOT EDIT!

#ifndef HMI_QT_MESSAGE_HMISTATUS_H
#define HMI_QT_MESSAGE_HMISTATUS_H

#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

namespace hmi_qt
{
  template <class ContainerAllocator>
  struct HmiStatus_
  {
    typedef HmiStatus_<ContainerAllocator> Type;

    HmiStatus_()
        : hmi_robot_status(0), hmi_livox_status(0), hmi_camera_status(0), hmi_plc_status(0), hmi_robot_position_status(0), hmi_robot_error_code(0), hmi_air_pressure(0), hmi_mode_selection(0), hmi_working_count(0), hmi_working_total_count(0), hmi_livox_cabinet_door(0), hmi_livox_cabinet_cooler(0), hmi_blowing_air(0), hmi_pneumatic_pick(0), hmi_safety_door_1(0), hmi_safety_door_2(0), hmi_safety_door_3(0), hmi_status_stop_1(0), hmi_status_stop_2(0), hmi_status_stop_3(0), hmi_room_temperature(0), hmi_guide_brake_status(0), hmi_furnace_position(0), hmi_switchButton_8(0), hmi_switchButton_9(0), hmi_switchButton_10(0)
    {
    }
    HmiStatus_(const ContainerAllocator &_alloc)
        : hmi_robot_status(0), hmi_livox_status(0), hmi_camera_status(0), hmi_plc_status(0), hmi_robot_position_status(0), hmi_robot_error_code(0), hmi_air_pressure(0), hmi_mode_selection(0), hmi_working_count(0), hmi_working_total_count(0), hmi_livox_cabinet_door(0), hmi_livox_cabinet_cooler(0), hmi_blowing_air(0), hmi_pneumatic_pick(0), hmi_safety_door_1(0), hmi_safety_door_2(0), hmi_safety_door_3(0), hmi_status_stop_1(0), hmi_status_stop_2(0), hmi_status_stop_3(0), hmi_room_temperature(0), hmi_guide_brake_status(0), hmi_furnace_position(0), hmi_switchButton_8(0), hmi_switchButton_9(0), hmi_switchButton_10(0)
    {
      (void)_alloc;
    }

    typedef int16_t _hmi_robot_status_type;
    _hmi_robot_status_type hmi_robot_status;

    typedef int16_t _hmi_livox_status_type;
    _hmi_livox_status_type hmi_livox_status;

    typedef int16_t _hmi_camera_status_type;
    _hmi_camera_status_type hmi_camera_status;

    typedef int16_t _hmi_plc_status_type;
    _hmi_plc_status_type hmi_plc_status;

    typedef int16_t _hmi_robot_position_status_type;
    _hmi_robot_position_status_type hmi_robot_position_status;

    typedef int16_t _hmi_robot_error_code_type;
    _hmi_robot_error_code_type hmi_robot_error_code;

    typedef int16_t _hmi_air_pressure_type;
    _hmi_air_pressure_type hmi_air_pressure;

    typedef int16_t _hmi_mode_selection_type;
    _hmi_mode_selection_type hmi_mode_selection;

    typedef int16_t _hmi_working_count_type;
    _hmi_working_count_type hmi_working_count;

    typedef int16_t _hmi_working_total_count_type;
    _hmi_working_total_count_type hmi_working_total_count;

    typedef int16_t _hmi_livox_cabinet_door_type;
    _hmi_livox_cabinet_door_type hmi_livox_cabinet_door;

    typedef int16_t _hmi_livox_cabinet_cooler_type;
    _hmi_livox_cabinet_cooler_type hmi_livox_cabinet_cooler;

    typedef int16_t _hmi_blowing_air_type;
    _hmi_blowing_air_type hmi_blowing_air;

    typedef int16_t _hmi_pneumatic_pick_type;
    _hmi_pneumatic_pick_type hmi_pneumatic_pick;

    typedef int16_t _hmi_safety_door_1_type;
    _hmi_safety_door_1_type hmi_safety_door_1;

    typedef int16_t _hmi_safety_door_2_type;
    _hmi_safety_door_2_type hmi_safety_door_2;

    typedef int16_t _hmi_safety_door_3_type;
    _hmi_safety_door_3_type hmi_safety_door_3;

    typedef int16_t _hmi_status_stop_1_type;
    _hmi_status_stop_1_type hmi_status_stop_1;

    typedef int16_t _hmi_status_stop_2_type;
    _hmi_status_stop_2_type hmi_status_stop_2;

    typedef int16_t _hmi_status_stop_3_type;
    _hmi_status_stop_3_type hmi_status_stop_3;

    typedef int16_t _hmi_room_temperature_type;
    _hmi_room_temperature_type hmi_room_temperature;

    typedef int16_t _hmi_guide_brake_status_type;
    _hmi_guide_brake_status_type hmi_guide_brake_status;

    typedef int16_t _hmi_furnace_position_type;
    _hmi_furnace_position_type hmi_furnace_position;

    typedef int16_t _hmi_switchButton_8_type;
    _hmi_switchButton_8_type hmi_switchButton_8;

    typedef int16_t _hmi_switchButton_9_type;
    _hmi_switchButton_9_type hmi_switchButton_9;

    typedef int16_t _hmi_switchButton_10_type;
    _hmi_switchButton_10_type hmi_switchButton_10;

    typedef boost::shared_ptr<::hmi_qt::HmiStatus_<ContainerAllocator>> Ptr;
    typedef boost::shared_ptr<::hmi_qt::HmiStatus_<ContainerAllocator> const> ConstPtr;

  }; // struct HmiStatus_

  typedef ::hmi_qt::HmiStatus_<std::allocator<void>> HmiStatus;

  typedef boost::shared_ptr<::hmi_qt::HmiStatus> HmiStatusPtr;
  typedef boost::shared_ptr<::hmi_qt::HmiStatus const> HmiStatusConstPtr;

  // constants requiring out of line definition

  template <typename ContainerAllocator>
  std::ostream &operator<<(std::ostream &s, const ::hmi_qt::HmiStatus_<ContainerAllocator> &v)
  {
    ros::message_operations::Printer<::hmi_qt::HmiStatus_<ContainerAllocator>>::stream(s, "", v);
    return s;
  }

  template <typename ContainerAllocator1, typename ContainerAllocator2>
  bool operator==(const ::hmi_qt::HmiStatus_<ContainerAllocator1> &lhs, const ::hmi_qt::HmiStatus_<ContainerAllocator2> &rhs)
  {
    return lhs.hmi_robot_status == rhs.hmi_robot_status &&
           lhs.hmi_livox_status == rhs.hmi_livox_status &&
           lhs.hmi_camera_status == rhs.hmi_camera_status &&
           lhs.hmi_plc_status == rhs.hmi_plc_status &&
           lhs.hmi_robot_position_status == rhs.hmi_robot_position_status &&
           lhs.hmi_robot_error_code == rhs.hmi_robot_error_code &&
           lhs.hmi_air_pressure == rhs.hmi_air_pressure &&
           lhs.hmi_mode_selection == rhs.hmi_mode_selection &&
           lhs.hmi_working_count == rhs.hmi_working_count &&
           lhs.hmi_working_total_count == rhs.hmi_working_total_count &&
           lhs.hmi_livox_cabinet_door == rhs.hmi_livox_cabinet_door &&
           lhs.hmi_livox_cabinet_cooler == rhs.hmi_livox_cabinet_cooler &&
           lhs.hmi_blowing_air == rhs.hmi_blowing_air &&
           lhs.hmi_pneumatic_pick == rhs.hmi_pneumatic_pick &&
           lhs.hmi_safety_door_1 == rhs.hmi_safety_door_1 &&
           lhs.hmi_safety_door_2 == rhs.hmi_safety_door_2 &&
           lhs.hmi_safety_door_3 == rhs.hmi_safety_door_3 &&
           lhs.hmi_status_stop_1 == rhs.hmi_status_stop_1 &&
           lhs.hmi_status_stop_2 == rhs.hmi_status_stop_2 &&
           lhs.hmi_status_stop_3 == rhs.hmi_status_stop_3 &&
           lhs.hmi_room_temperature == rhs.hmi_room_temperature &&
           lhs.hmi_guide_brake_status == rhs.hmi_guide_brake_status &&
           lhs.hmi_furnace_position == rhs.hmi_furnace_position &&
           lhs.hmi_switchButton_8 == rhs.hmi_switchButton_8 &&
           lhs.hmi_switchButton_9 == rhs.hmi_switchButton_9 &&
           lhs.hmi_switchButton_10 == rhs.hmi_switchButton_10;
  }

  template <typename ContainerAllocator1, typename ContainerAllocator2>
  bool operator!=(const ::hmi_qt::HmiStatus_<ContainerAllocator1> &lhs, const ::hmi_qt::HmiStatus_<ContainerAllocator2> &rhs)
  {
    return !(lhs == rhs);
  }

} // namespace hmi_qt

namespace ros
{
  namespace message_traits
  {

    template <class ContainerAllocator>
    struct IsMessage<::hmi_qt::HmiStatus_<ContainerAllocator>>
        : TrueType
    {
    };

    template <class ContainerAllocator>
    struct IsMessage<::hmi_qt::HmiStatus_<ContainerAllocator> const>
        : TrueType
    {
    };

    template <class ContainerAllocator>
    struct IsFixedSize<::hmi_qt::HmiStatus_<ContainerAllocator>>
        : TrueType
    {
    };

    template <class ContainerAllocator>
    struct IsFixedSize<::hmi_qt::HmiStatus_<ContainerAllocator> const>
        : TrueType
    {
    };

    template <class ContainerAllocator>
    struct HasHeader<::hmi_qt::HmiStatus_<ContainerAllocator>>
        : FalseType
    {
    };

    template <class ContainerAllocator>
    struct HasHeader<::hmi_qt::HmiStatus_<ContainerAllocator> const>
        : FalseType
    {
    };

    template <class ContainerAllocator>
    struct MD5Sum<::hmi_qt::HmiStatus_<ContainerAllocator>>
    {
      static const char *value()
      {
        return "4c3e4703624909b7bb07f23cfc32dc10";
      }

      static const char *value(const ::hmi_qt::HmiStatus_<ContainerAllocator> &) { return value(); }
      static const uint64_t static_value1 = 0x4c3e4703624909b7ULL;
      static const uint64_t static_value2 = 0xbb07f23cfc32dc10ULL;
    };

    template <class ContainerAllocator>
    struct DataType<::hmi_qt::HmiStatus_<ContainerAllocator>>
    {
      static const char *value()
      {
        return "hmi_qt/HmiStatus";
      }

      static const char *value(const ::hmi_qt::HmiStatus_<ContainerAllocator> &) { return value(); }
    };

    template <class ContainerAllocator>
    struct Definition<::hmi_qt::HmiStatus_<ContainerAllocator>>
    {
      static const char *value()
      {
        return "# 初始值都是0\n"
               "int16 hmi_robot_status\n"
               "int16 hmi_livox_status\n"
               "int16 hmi_camera_status\n"
               "int16 hmi_plc_status\n"
               "int16 hmi_robot_position_status\n"
               "int16 hmi_robot_error_code\n"
               "int16 hmi_air_pressure\n"
               "int16 hmi_mode_selection\n"
               "int16 hmi_working_count\n"
               "int16 hmi_working_total_count\n"
               "int16 hmi_livox_cabinet_door\n"
               "int16 hmi_livox_cabinet_cooler\n"
               "int16 hmi_blowing_air\n"
               "int16 hmi_pneumatic_pick\n"
               "int16 hmi_safety_door_1\n"
               "int16 hmi_safety_door_2\n"
               "int16 hmi_safety_door_3\n"
               "int16 hmi_status_stop_1\n"
               "int16 hmi_status_stop_2\n"
               "int16 hmi_status_stop_3\n"
               "int16 hmi_room_temperature\n"
               "int16 hmi_guide_brake_status\n"
               "int16 hmi_furnace_position\n"
               "int16 hmi_switchButton_8\n"
               "int16 hmi_switchButton_9\n"
               "int16 hmi_switchButton_10\n";
      }

      static const char *value(const ::hmi_qt::HmiStatus_<ContainerAllocator> &) { return value(); }
    };

  } // namespace message_traits
} // namespace ros

namespace ros
{
  namespace serialization
  {

    template <class ContainerAllocator>
    struct Serializer<::hmi_qt::HmiStatus_<ContainerAllocator>>
    {
      template <typename Stream, typename T>
      inline static void allInOne(Stream &stream, T m)
      {
        stream.next(m.hmi_robot_status);
        stream.next(m.hmi_livox_status);
        stream.next(m.hmi_camera_status);
        stream.next(m.hmi_plc_status);
        stream.next(m.hmi_robot_position_status);
        stream.next(m.hmi_robot_error_code);
        stream.next(m.hmi_air_pressure);
        stream.next(m.hmi_mode_selection);
        stream.next(m.hmi_working_count);
        stream.next(m.hmi_working_total_count);
        stream.next(m.hmi_livox_cabinet_door);
        stream.next(m.hmi_livox_cabinet_cooler);
        stream.next(m.hmi_blowing_air);
        stream.next(m.hmi_pneumatic_pick);
        stream.next(m.hmi_safety_door_1);
        stream.next(m.hmi_safety_door_2);
        stream.next(m.hmi_safety_door_3);
        stream.next(m.hmi_status_stop_1);
        stream.next(m.hmi_status_stop_2);
        stream.next(m.hmi_status_stop_3);
        stream.next(m.hmi_room_temperature);
        stream.next(m.hmi_guide_brake_status);
        stream.next(m.hmi_furnace_position);
        stream.next(m.hmi_switchButton_8);
        stream.next(m.hmi_switchButton_9);
        stream.next(m.hmi_switchButton_10);
      }

      ROS_DECLARE_ALLINONE_SERIALIZER
    }; // struct HmiStatus_

  } // namespace serialization
} // namespace ros

namespace ros
{
  namespace message_operations
  {

    template <class ContainerAllocator>
    struct Printer<::hmi_qt::HmiStatus_<ContainerAllocator>>
    {
      template <typename Stream>
      static void stream(Stream &s, const std::string &indent, const ::hmi_qt::HmiStatus_<ContainerAllocator> &v)
      {
        s << indent << "hmi_robot_status: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_robot_status);
        s << indent << "hmi_livox_status: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_livox_status);
        s << indent << "hmi_camera_status: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_camera_status);
        s << indent << "hmi_plc_status: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_plc_status);
        s << indent << "hmi_robot_position_status: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_robot_position_status);
        s << indent << "hmi_robot_error_code: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_robot_error_code);
        s << indent << "hmi_air_pressure: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_air_pressure);
        s << indent << "hmi_mode_selection: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_mode_selection);
        s << indent << "hmi_working_count: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_working_count);
        s << indent << "hmi_working_total_count: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_working_total_count);
        s << indent << "hmi_livox_cabinet_door: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_livox_cabinet_door);
        s << indent << "hmi_livox_cabinet_cooler: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_livox_cabinet_cooler);
        s << indent << "hmi_blowing_air: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_blowing_air);
        s << indent << "hmi_pneumatic_pick: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_pneumatic_pick);
        s << indent << "hmi_safety_door_1: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_safety_door_1);
        s << indent << "hmi_safety_door_2: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_safety_door_2);
        s << indent << "hmi_safety_door_3: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_safety_door_3);
        s << indent << "hmi_status_stop_1: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_status_stop_1);
        s << indent << "hmi_status_stop_2: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_status_stop_2);
        s << indent << "hmi_status_stop_3: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_status_stop_3);
        s << indent << "hmi_room_temperature: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_room_temperature);
        s << indent << "hmi_guide_brake_status: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_guide_brake_status);
        s << indent << "hmi_furnace_position: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_furnace_position);
        s << indent << "hmi_switchButton_8: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_switchButton_8);
        s << indent << "hmi_switchButton_9: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_switchButton_9);
        s << indent << "hmi_switchButton_10: ";
        Printer<int16_t>::stream(s, indent + "  ", v.hmi_switchButton_10);
      }
    };

  } // namespace message_operations
} // namespace ros

#endif // HMI_QT_MESSAGE_HMISTATUS_H

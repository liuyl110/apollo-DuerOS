// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeTouchEventAllDeviceProto.proto

#ifndef PROTOBUF_CarlifeTouchEventAllDeviceProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeTouchEventAllDeviceProto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "CarlifeTouchEventDeviceProto.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeTouchEventAllDeviceProto_2eproto();
void protobuf_AssignDesc_CarlifeTouchEventAllDeviceProto_2eproto();
void protobuf_ShutdownFile_CarlifeTouchEventAllDeviceProto_2eproto();

class CarlifeTouchEventAllDevice;

// ===================================================================

class CarlifeTouchEventAllDevice : public ::google::protobuf::Message {
 public:
  CarlifeTouchEventAllDevice();
  virtual ~CarlifeTouchEventAllDevice();

  CarlifeTouchEventAllDevice(const CarlifeTouchEventAllDevice& from);

  inline CarlifeTouchEventAllDevice& operator=(const CarlifeTouchEventAllDevice& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CarlifeTouchEventAllDevice& default_instance();

  void Swap(CarlifeTouchEventAllDevice* other);

  // implements Message ----------------------------------------------

  CarlifeTouchEventAllDevice* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeTouchEventAllDevice& from);
  void MergeFrom(const CarlifeTouchEventAllDevice& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 version = 1;
  inline bool has_version() const;
  inline void clear_version();
  static const int kVersionFieldNumber = 1;
  inline ::google::protobuf::int32 version() const;
  inline void set_version(::google::protobuf::int32 value);

  // required int32 cnt = 2;
  inline bool has_cnt() const;
  inline void clear_cnt();
  static const int kCntFieldNumber = 2;
  inline ::google::protobuf::int32 cnt() const;
  inline void set_cnt(::google::protobuf::int32 value);

  // repeated .com.baidu.carlife.protobuf.CarlifeTouchEventDevice devices = 3;
  inline int devices_size() const;
  inline void clear_devices();
  static const int kDevicesFieldNumber = 3;
  inline const ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice& devices(int index) const;
  inline ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice* mutable_devices(int index);
  inline ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice* add_devices();
  inline const ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice >&
      devices() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice >*
      mutable_devices();

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeTouchEventAllDevice)
 private:
  inline void set_has_version();
  inline void clear_has_version();
  inline void set_has_cnt();
  inline void clear_has_cnt();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 version_;
  ::google::protobuf::int32 cnt_;
  ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice > devices_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeTouchEventAllDeviceProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeTouchEventAllDeviceProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeTouchEventAllDeviceProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeTouchEventAllDevice* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeTouchEventAllDevice

// required int32 version = 1;
inline bool CarlifeTouchEventAllDevice::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeTouchEventAllDevice::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeTouchEventAllDevice::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeTouchEventAllDevice::clear_version() {
  version_ = 0;
  clear_has_version();
}
inline ::google::protobuf::int32 CarlifeTouchEventAllDevice::version() const {
  return version_;
}
inline void CarlifeTouchEventAllDevice::set_version(::google::protobuf::int32 value) {
  set_has_version();
  version_ = value;
}

// required int32 cnt = 2;
inline bool CarlifeTouchEventAllDevice::has_cnt() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CarlifeTouchEventAllDevice::set_has_cnt() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CarlifeTouchEventAllDevice::clear_has_cnt() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CarlifeTouchEventAllDevice::clear_cnt() {
  cnt_ = 0;
  clear_has_cnt();
}
inline ::google::protobuf::int32 CarlifeTouchEventAllDevice::cnt() const {
  return cnt_;
}
inline void CarlifeTouchEventAllDevice::set_cnt(::google::protobuf::int32 value) {
  set_has_cnt();
  cnt_ = value;
}

// repeated .com.baidu.carlife.protobuf.CarlifeTouchEventDevice devices = 3;
inline int CarlifeTouchEventAllDevice::devices_size() const {
  return devices_.size();
}
inline void CarlifeTouchEventAllDevice::clear_devices() {
  devices_.Clear();
}
inline const ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice& CarlifeTouchEventAllDevice::devices(int index) const {
  return devices_.Get(index);
}
inline ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice* CarlifeTouchEventAllDevice::mutable_devices(int index) {
  return devices_.Mutable(index);
}
inline ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice* CarlifeTouchEventAllDevice::add_devices() {
  return devices_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice >&
CarlifeTouchEventAllDevice::devices() const {
  return devices_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::baidu::carlife::protobuf::CarlifeTouchEventDevice >*
CarlifeTouchEventAllDevice::mutable_devices() {
  return &devices_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CarlifeTouchEventAllDeviceProto_2eproto__INCLUDED

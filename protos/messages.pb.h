// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2eproto;
namespace grpc_example {
class GreetRequest;
struct GreetRequestDefaultTypeInternal;
extern GreetRequestDefaultTypeInternal _GreetRequest_default_instance_;
class GreetResponse;
struct GreetResponseDefaultTypeInternal;
extern GreetResponseDefaultTypeInternal _GreetResponse_default_instance_;
}  // namespace grpc_example
PROTOBUF_NAMESPACE_OPEN
template<> ::grpc_example::GreetRequest* Arena::CreateMaybeMessage<::grpc_example::GreetRequest>(Arena*);
template<> ::grpc_example::GreetResponse* Arena::CreateMaybeMessage<::grpc_example::GreetResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpc_example {

// ===================================================================

class GreetRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpc_example.GreetRequest) */ {
 public:
  inline GreetRequest() : GreetRequest(nullptr) {}
  ~GreetRequest() override;
  explicit constexpr GreetRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GreetRequest(const GreetRequest& from);
  GreetRequest(GreetRequest&& from) noexcept
    : GreetRequest() {
    *this = ::std::move(from);
  }

  inline GreetRequest& operator=(const GreetRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GreetRequest& operator=(GreetRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GreetRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GreetRequest* internal_default_instance() {
    return reinterpret_cast<const GreetRequest*>(
               &_GreetRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GreetRequest& a, GreetRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GreetRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GreetRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GreetRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GreetRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GreetRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const GreetRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GreetRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpc_example.GreetRequest";
  }
  protected:
  explicit GreetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRequestFieldNumber = 1,
  };
  // string request = 1;
  void clear_request();
  const std::string& request() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_request(ArgT0&& arg0, ArgT... args);
  std::string* mutable_request();
  PROTOBUF_NODISCARD std::string* release_request();
  void set_allocated_request(std::string* request);
  private:
  const std::string& _internal_request() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_request(const std::string& value);
  std::string* _internal_mutable_request();
  public:

  // @@protoc_insertion_point(class_scope:grpc_example.GreetRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr request_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2eproto;
};
// -------------------------------------------------------------------

class GreetResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpc_example.GreetResponse) */ {
 public:
  inline GreetResponse() : GreetResponse(nullptr) {}
  ~GreetResponse() override;
  explicit constexpr GreetResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GreetResponse(const GreetResponse& from);
  GreetResponse(GreetResponse&& from) noexcept
    : GreetResponse() {
    *this = ::std::move(from);
  }

  inline GreetResponse& operator=(const GreetResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GreetResponse& operator=(GreetResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GreetResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GreetResponse* internal_default_instance() {
    return reinterpret_cast<const GreetResponse*>(
               &_GreetResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GreetResponse& a, GreetResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GreetResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GreetResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GreetResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GreetResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GreetResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const GreetResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GreetResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpc_example.GreetResponse";
  }
  protected:
  explicit GreetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResponseFieldNumber = 1,
  };
  // string response = 1;
  void clear_response();
  const std::string& response() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_response(ArgT0&& arg0, ArgT... args);
  std::string* mutable_response();
  PROTOBUF_NODISCARD std::string* release_response();
  void set_allocated_response(std::string* response);
  private:
  const std::string& _internal_response() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_response(const std::string& value);
  std::string* _internal_mutable_response();
  public:

  // @@protoc_insertion_point(class_scope:grpc_example.GreetResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr response_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GreetRequest

// string request = 1;
inline void GreetRequest::clear_request() {
  request_.ClearToEmpty();
}
inline const std::string& GreetRequest::request() const {
  // @@protoc_insertion_point(field_get:grpc_example.GreetRequest.request)
  return _internal_request();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GreetRequest::set_request(ArgT0&& arg0, ArgT... args) {
 
 request_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpc_example.GreetRequest.request)
}
inline std::string* GreetRequest::mutable_request() {
  std::string* _s = _internal_mutable_request();
  // @@protoc_insertion_point(field_mutable:grpc_example.GreetRequest.request)
  return _s;
}
inline const std::string& GreetRequest::_internal_request() const {
  return request_.Get();
}
inline void GreetRequest::_internal_set_request(const std::string& value) {
  
  request_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* GreetRequest::_internal_mutable_request() {
  
  return request_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* GreetRequest::release_request() {
  // @@protoc_insertion_point(field_release:grpc_example.GreetRequest.request)
  return request_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void GreetRequest::set_allocated_request(std::string* request) {
  if (request != nullptr) {
    
  } else {
    
  }
  request_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), request,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (request_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    request_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpc_example.GreetRequest.request)
}

// -------------------------------------------------------------------

// GreetResponse

// string response = 1;
inline void GreetResponse::clear_response() {
  response_.ClearToEmpty();
}
inline const std::string& GreetResponse::response() const {
  // @@protoc_insertion_point(field_get:grpc_example.GreetResponse.response)
  return _internal_response();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GreetResponse::set_response(ArgT0&& arg0, ArgT... args) {
 
 response_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:grpc_example.GreetResponse.response)
}
inline std::string* GreetResponse::mutable_response() {
  std::string* _s = _internal_mutable_response();
  // @@protoc_insertion_point(field_mutable:grpc_example.GreetResponse.response)
  return _s;
}
inline const std::string& GreetResponse::_internal_response() const {
  return response_.Get();
}
inline void GreetResponse::_internal_set_response(const std::string& value) {
  
  response_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* GreetResponse::_internal_mutable_response() {
  
  return response_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* GreetResponse::release_response() {
  // @@protoc_insertion_point(field_release:grpc_example.GreetResponse.response)
  return response_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void GreetResponse::set_allocated_response(std::string* response) {
  if (response != nullptr) {
    
  } else {
    
  }
  response_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), response,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (response_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    response_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:grpc_example.GreetResponse.response)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpc_example

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_2eproto

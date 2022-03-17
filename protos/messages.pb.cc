// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#include "messages.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace grpc_example {
constexpr GreetRequest::GreetRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : request_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct GreetRequestDefaultTypeInternal {
  constexpr GreetRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GreetRequestDefaultTypeInternal() {}
  union {
    GreetRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GreetRequestDefaultTypeInternal _GreetRequest_default_instance_;
constexpr GreetResponse::GreetResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : response_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct GreetResponseDefaultTypeInternal {
  constexpr GreetResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GreetResponseDefaultTypeInternal() {}
  union {
    GreetResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GreetResponseDefaultTypeInternal _GreetResponse_default_instance_;
}  // namespace grpc_example
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_messages_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_messages_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_messages_2eproto = nullptr;

const uint32_t TableStruct_messages_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpc_example::GreetRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpc_example::GreetRequest, request_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpc_example::GreetResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpc_example::GreetResponse, response_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpc_example::GreetRequest)},
  { 7, -1, -1, sizeof(::grpc_example::GreetResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpc_example::_GreetRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpc_example::_GreetResponse_default_instance_),
};

const char descriptor_table_protodef_messages_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016messages.proto\022\014grpc_example\"\037\n\014GreetR"
  "equest\022\017\n\007request\030\001 \001(\t\"!\n\rGreetResponse"
  "\022\020\n\010response\030\001 \001(\t2M\n\007Greeter\022B\n\005Greet\022\032"
  ".grpc_example.GreetRequest\032\033.grpc_exampl"
  "e.GreetResponse\"\000b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_messages_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_2eproto = {
  false, false, 185, descriptor_table_protodef_messages_2eproto, "messages.proto", 
  &descriptor_table_messages_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_messages_2eproto::offsets,
  file_level_metadata_messages_2eproto, file_level_enum_descriptors_messages_2eproto, file_level_service_descriptors_messages_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_messages_2eproto_getter() {
  return &descriptor_table_messages_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_messages_2eproto(&descriptor_table_messages_2eproto);
namespace grpc_example {

// ===================================================================

class GreetRequest::_Internal {
 public:
};

GreetRequest::GreetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpc_example.GreetRequest)
}
GreetRequest::GreetRequest(const GreetRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  request_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    request_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_request().empty()) {
    request_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_request(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpc_example.GreetRequest)
}

inline void GreetRequest::SharedCtor() {
request_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  request_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GreetRequest::~GreetRequest() {
  // @@protoc_insertion_point(destructor:grpc_example.GreetRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GreetRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  request_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GreetRequest::ArenaDtor(void* object) {
  GreetRequest* _this = reinterpret_cast< GreetRequest* >(object);
  (void)_this;
}
void GreetRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GreetRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GreetRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpc_example.GreetRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  request_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GreetRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string request = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_request();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpc_example.GreetRequest.request"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GreetRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpc_example.GreetRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string request = 1;
  if (!this->_internal_request().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_request().data(), static_cast<int>(this->_internal_request().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpc_example.GreetRequest.request");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_request(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpc_example.GreetRequest)
  return target;
}

size_t GreetRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpc_example.GreetRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string request = 1;
  if (!this->_internal_request().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GreetRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GreetRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GreetRequest::GetClassData() const { return &_class_data_; }

void GreetRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<GreetRequest *>(to)->MergeFrom(
      static_cast<const GreetRequest &>(from));
}


void GreetRequest::MergeFrom(const GreetRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpc_example.GreetRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_request().empty()) {
    _internal_set_request(from._internal_request());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GreetRequest::CopyFrom(const GreetRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpc_example.GreetRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GreetRequest::IsInitialized() const {
  return true;
}

void GreetRequest::InternalSwap(GreetRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &request_, lhs_arena,
      &other->request_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GreetRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_messages_2eproto_getter, &descriptor_table_messages_2eproto_once,
      file_level_metadata_messages_2eproto[0]);
}

// ===================================================================

class GreetResponse::_Internal {
 public:
};

GreetResponse::GreetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpc_example.GreetResponse)
}
GreetResponse::GreetResponse(const GreetResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    response_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_response().empty()) {
    response_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_response(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpc_example.GreetResponse)
}

inline void GreetResponse::SharedCtor() {
response_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  response_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GreetResponse::~GreetResponse() {
  // @@protoc_insertion_point(destructor:grpc_example.GreetResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void GreetResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  response_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void GreetResponse::ArenaDtor(void* object) {
  GreetResponse* _this = reinterpret_cast< GreetResponse* >(object);
  (void)_this;
}
void GreetResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GreetResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GreetResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:grpc_example.GreetResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  response_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GreetResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string response = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_response();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpc_example.GreetResponse.response"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GreetResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpc_example.GreetResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string response = 1;
  if (!this->_internal_response().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_response().data(), static_cast<int>(this->_internal_response().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpc_example.GreetResponse.response");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_response(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpc_example.GreetResponse)
  return target;
}

size_t GreetResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpc_example.GreetResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string response = 1;
  if (!this->_internal_response().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_response());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GreetResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    GreetResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GreetResponse::GetClassData() const { return &_class_data_; }

void GreetResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<GreetResponse *>(to)->MergeFrom(
      static_cast<const GreetResponse &>(from));
}


void GreetResponse::MergeFrom(const GreetResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpc_example.GreetResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_response().empty()) {
    _internal_set_response(from._internal_response());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GreetResponse::CopyFrom(const GreetResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpc_example.GreetResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GreetResponse::IsInitialized() const {
  return true;
}

void GreetResponse::InternalSwap(GreetResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &response_, lhs_arena,
      &other->response_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GreetResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_messages_2eproto_getter, &descriptor_table_messages_2eproto_once,
      file_level_metadata_messages_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpc_example
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpc_example::GreetRequest* Arena::CreateMaybeMessage< ::grpc_example::GreetRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpc_example::GreetRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpc_example::GreetResponse* Arena::CreateMaybeMessage< ::grpc_example::GreetResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpc_example::GreetResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: v1/update-firmware.proto
#include "EnableGrpcIncludes.h"
#include "v1/update-firmware.pb.h"
#include "v1/update-firmware.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
#include "DisableGrpcIncludes.h"
namespace handEngine {
namespace v1 {

static const char* UpdateFirmwareService_method_names[] = {
  "/handEngine.v1.UpdateFirmwareService/Update",
  "/handEngine.v1.UpdateFirmwareService/UpdateAll",
  "/handEngine.v1.UpdateFirmwareService/AddFirmwarePath",
};

std::unique_ptr< UpdateFirmwareService::Stub> UpdateFirmwareService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< UpdateFirmwareService::Stub> stub(new UpdateFirmwareService::Stub(channel, options));
  return stub;
}

UpdateFirmwareService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Update_(UpdateFirmwareService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_UpdateAll_(UpdateFirmwareService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_AddFirmwarePath_(UpdateFirmwareService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::handEngine::v1::UpdateResponse>* UpdateFirmwareService::Stub::UpdateRaw(::grpc::ClientContext* context, const ::handEngine::v1::SourceId& request) {
  return ::grpc::internal::ClientReaderFactory< ::handEngine::v1::UpdateResponse>::Create(channel_.get(), rpcmethod_Update_, context, request);
}

void UpdateFirmwareService::Stub::async::Update(::grpc::ClientContext* context, const ::handEngine::v1::SourceId* request, ::grpc::ClientReadReactor< ::handEngine::v1::UpdateResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::handEngine::v1::UpdateResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_Update_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::handEngine::v1::UpdateResponse>* UpdateFirmwareService::Stub::AsyncUpdateRaw(::grpc::ClientContext* context, const ::handEngine::v1::SourceId& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::handEngine::v1::UpdateResponse>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::handEngine::v1::UpdateResponse>* UpdateFirmwareService::Stub::PrepareAsyncUpdateRaw(::grpc::ClientContext* context, const ::handEngine::v1::SourceId& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::handEngine::v1::UpdateResponse>::Create(channel_.get(), cq, rpcmethod_Update_, context, request, false, nullptr);
}

::grpc::ClientReader< ::handEngine::v1::UpdateResponse>* UpdateFirmwareService::Stub::UpdateAllRaw(::grpc::ClientContext* context, const ::handEngine::v1::BlankRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::handEngine::v1::UpdateResponse>::Create(channel_.get(), rpcmethod_UpdateAll_, context, request);
}

void UpdateFirmwareService::Stub::async::UpdateAll(::grpc::ClientContext* context, const ::handEngine::v1::BlankRequest* request, ::grpc::ClientReadReactor< ::handEngine::v1::UpdateResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::handEngine::v1::UpdateResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateAll_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::handEngine::v1::UpdateResponse>* UpdateFirmwareService::Stub::AsyncUpdateAllRaw(::grpc::ClientContext* context, const ::handEngine::v1::BlankRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::handEngine::v1::UpdateResponse>::Create(channel_.get(), cq, rpcmethod_UpdateAll_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::handEngine::v1::UpdateResponse>* UpdateFirmwareService::Stub::PrepareAsyncUpdateAllRaw(::grpc::ClientContext* context, const ::handEngine::v1::BlankRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::handEngine::v1::UpdateResponse>::Create(channel_.get(), cq, rpcmethod_UpdateAll_, context, request, false, nullptr);
}

::grpc::Status UpdateFirmwareService::Stub::AddFirmwarePath(::grpc::ClientContext* context, const ::handEngine::v1::GlobalFirmwarePathRequest& request, ::handEngine::v1::GlobalFirmwarePathResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::handEngine::v1::GlobalFirmwarePathRequest, ::handEngine::v1::GlobalFirmwarePathResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AddFirmwarePath_, context, request, response);
}

void UpdateFirmwareService::Stub::async::AddFirmwarePath(::grpc::ClientContext* context, const ::handEngine::v1::GlobalFirmwarePathRequest* request, ::handEngine::v1::GlobalFirmwarePathResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::handEngine::v1::GlobalFirmwarePathRequest, ::handEngine::v1::GlobalFirmwarePathResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddFirmwarePath_, context, request, response, std::move(f));
}

void UpdateFirmwareService::Stub::async::AddFirmwarePath(::grpc::ClientContext* context, const ::handEngine::v1::GlobalFirmwarePathRequest* request, ::handEngine::v1::GlobalFirmwarePathResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddFirmwarePath_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::handEngine::v1::GlobalFirmwarePathResponse>* UpdateFirmwareService::Stub::PrepareAsyncAddFirmwarePathRaw(::grpc::ClientContext* context, const ::handEngine::v1::GlobalFirmwarePathRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::handEngine::v1::GlobalFirmwarePathResponse, ::handEngine::v1::GlobalFirmwarePathRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AddFirmwarePath_, context, request);
}

::grpc::ClientAsyncResponseReader< ::handEngine::v1::GlobalFirmwarePathResponse>* UpdateFirmwareService::Stub::AsyncAddFirmwarePathRaw(::grpc::ClientContext* context, const ::handEngine::v1::GlobalFirmwarePathRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAddFirmwarePathRaw(context, request, cq);
  result->StartCall();
  return result;
}

UpdateFirmwareService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      UpdateFirmwareService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< UpdateFirmwareService::Service, ::handEngine::v1::SourceId, ::handEngine::v1::UpdateResponse>(
          [](UpdateFirmwareService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::handEngine::v1::SourceId* req,
             ::grpc::ServerWriter<::handEngine::v1::UpdateResponse>* writer) {
               return service->Update(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      UpdateFirmwareService_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< UpdateFirmwareService::Service, ::handEngine::v1::BlankRequest, ::handEngine::v1::UpdateResponse>(
          [](UpdateFirmwareService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::handEngine::v1::BlankRequest* req,
             ::grpc::ServerWriter<::handEngine::v1::UpdateResponse>* writer) {
               return service->UpdateAll(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      UpdateFirmwareService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< UpdateFirmwareService::Service, ::handEngine::v1::GlobalFirmwarePathRequest, ::handEngine::v1::GlobalFirmwarePathResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](UpdateFirmwareService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::handEngine::v1::GlobalFirmwarePathRequest* req,
             ::handEngine::v1::GlobalFirmwarePathResponse* resp) {
               return service->AddFirmwarePath(ctx, req, resp);
             }, this)));
}

UpdateFirmwareService::Service::~Service() {
}

::grpc::Status UpdateFirmwareService::Service::Update(::grpc::ServerContext* context, const ::handEngine::v1::SourceId* request, ::grpc::ServerWriter< ::handEngine::v1::UpdateResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status UpdateFirmwareService::Service::UpdateAll(::grpc::ServerContext* context, const ::handEngine::v1::BlankRequest* request, ::grpc::ServerWriter< ::handEngine::v1::UpdateResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status UpdateFirmwareService::Service::AddFirmwarePath(::grpc::ServerContext* context, const ::handEngine::v1::GlobalFirmwarePathRequest* request, ::handEngine::v1::GlobalFirmwarePathResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace handEngine
}  // namespace v1


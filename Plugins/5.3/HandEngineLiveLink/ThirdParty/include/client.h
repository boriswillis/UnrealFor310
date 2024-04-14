#include "EnableGrpcIncludes.h"
#pragma push_macro("verify")   // store 'verify' macro current definition
#undef verify  // undef to avoid conflicts
#include "pch.h"
#include "grpcpp/grpcpp.h"
#include "v1/animation.grpc.pb.h"
#include "v1/device.grpc.pb.h"
#include "v1/license.grpc.pb.h"
#include "v1/performer.grpc.pb.h"
#include "v1/stage.grpc.pb.h"
#include "v1/update-firmware.grpc.pb.h"
#pragma pop_macro("verify")
#include "DisableGrpcIncludes.h"



namespace handEngine {
  namespace v1 {
    class HandEngineClient final {
    private:
      std::string connect = "localhost:60062";
      std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel(connect, grpc::InsecureChannelCredentials());
    public:
      HandEngineClient() {}
      HandEngineClient(std::string mConnect) {
          connect = mConnect;
            }
      std::unique_ptr<handEngine::v1::AnimationService::Stub> Animation = handEngine::v1::AnimationService::NewStub(channel);
      std::unique_ptr<handEngine::v1::DeviceService::Stub> Device = handEngine::v1::DeviceService::NewStub(channel);
      std::unique_ptr<handEngine::v1::LicenseService::Stub> License = handEngine::v1::LicenseService::NewStub(channel);
      std::unique_ptr<handEngine::v1::PerformerService::Stub> Performer = handEngine::v1::PerformerService::NewStub(channel);
      std::unique_ptr<handEngine::v1::StageService::Stub> Stage = handEngine::v1::StageService::NewStub(channel);
      std::unique_ptr<handEngine::v1::UpdateFirmwareService::Stub> UpdateFirmware = handEngine::v1::UpdateFirmwareService::NewStub(channel);

      
    };
  }
}


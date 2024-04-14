// Some copyright should be here...

using System.IO;
using UnrealBuildTool;

public class HandEngineLiveLink : ModuleRules
{


    private string ThirdPartyDirectory
    {
        get
        {
            return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/"));
        }
    }

    private string ThirdPartyLibrariesDirectory
    {
        get
        {
            return Path.Combine(ThirdPartyDirectory, "lib");
        }
    }
    public HandEngineLiveLink(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;


        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore","LiveLinkInterface","Messaging","LiveLink","LiveLinkAnimationCore", });

        PrivateDependencyModuleNames.AddRange(new string[] 
        {    
                "CoreUObject",
                "Engine",
                "InputCore",
                "Json",
                "JsonUtilities",
                "Networking",
                "Slate",
                "SlateCore",
                "Sockets", 
        });

        if (Target.Platform.IsInGroup(UnrealPlatformGroup.Windows))
        {
            PublicDefinitions.Add("GOOGLE_PROTOBUF_NO_RTTI");
            PublicDefinitions.Add("GPR_FORBID_UNREACHABLE_CODE");
            PublicDefinitions.Add("GRPC_ALLOW_EXCEPTIONS=0");
            PublicDefinitions.Add("GOOGLE_PROTOBUF_INTERNAL_DONATE_STEAL_INLINE");
            PublicDefinitions.Add("WITH_GRPC_BINDING=1");
        }
        else if (Target.IsInPlatformGroup(UnrealPlatformGroup.Android) || Target.IsInPlatformGroup(UnrealPlatformGroup.Apple))
        {
            PublicDefinitions.Add("PCH_H");
        }



        PublicIncludePaths.Add(Path.Combine(ThirdPartyDirectory, "include"));



        DirectoryInfo d = new DirectoryInfo(ThirdPartyLibrariesDirectory);
        FileInfo[] Files = d.GetFiles("*.lib");
        foreach (FileInfo file in Files)
        {
            PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyLibrariesDirectory, file.Name));
        }

    }
}

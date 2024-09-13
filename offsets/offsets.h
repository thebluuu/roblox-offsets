// DUMPED BY KENNETH

#pragma once

#include <cstdint>

namespace offsets {
    constexpr std::uint32_t RenderToEngine = 0x10;
    constexpr std::uint32_t RenderToFakeDataModel = 0x118;
    constexpr std::uint32_t FakeDataModelToRealDataModel = 0x198;
    constexpr std::uint32_t Name = 0x48;
    constexpr std::uint32_t ClassDescriptor = 0x18;
    constexpr std::uint32_t Children = 0x50;
    constexpr std::uint32_t Parent = 0x60;
    constexpr std::uint32_t ChildSize = 0x8;
    constexpr std::uint32_t GameId = 0x160;
    constexpr std::uint32_t PlaceId = 0x168;
    constexpr std::uint32_t GameLoaded = 0x3b1;
    constexpr std::uint32_t LocalPlayer = 0x100;
    constexpr std::uint32_t ModelInstance = 0x298;
    constexpr std::uint32_t DisplayName = 0x100;
    constexpr std::uint32_t UserId = 0x1e8;
    constexpr std::uint32_t Team = 0x1d0;
    constexpr std::uint32_t CameraMinZoomDistance = 0x23c;
    constexpr std::uint32_t CameraMaxZoomDistance = 0x238;
    constexpr std::uint32_t Health = 0x17c;
    constexpr std::uint32_t MaxHealth = 0x1a8;
    constexpr std::uint32_t WalkSpeedA = 0x1c0;
    constexpr std::uint32_t WalkSpeedB = 0x398;
    constexpr std::uint32_t JumpPower = 0x1a4;
    constexpr std::uint32_t HipHeight = 0x194;
    constexpr std::uint32_t MaxSlopeAngle = 0x1ac;
    constexpr std::uint32_t RigType = 0x1b8;
    constexpr std::uint32_t MoveDirection = 0x13c;
    constexpr std::uint32_t Sit = 0x1cc;
    constexpr std::uint32_t Primitive = 0x158;
    constexpr std::uint32_t BasePartSize = 0x2ac;
    constexpr std::uint32_t BasePartPosition = 0x140;
    constexpr std::uint32_t CFrame = 0x11c;
    constexpr std::uint32_t AssemblyLinearVelocity = 0x14c;
    constexpr std::uint32_t AssemblyAngularVelocity = 0x158;
    constexpr std::uint32_t BasePartColor = 0x188;
    constexpr std::uint32_t Transparency = 0xdc;
    constexpr std::uint32_t LocalTransparencyModifier = 0xe0;
    constexpr std::uint32_t Reflectance = 0xd8;
    constexpr std::uint32_t Anchored = 0x309;
    constexpr std::uint32_t CanCollide = 0x30b;
    constexpr std::uint32_t MeshId = 0x258;
    constexpr std::uint32_t TextureId = 0x280;
    constexpr std::uint32_t CurrentCamera = 0x420;
    constexpr std::uint32_t CameraSubject = 0xc0;
    constexpr std::uint32_t CameraPosition = 0xf4;
    constexpr std::uint32_t CameraRotation = 0xd0;
    constexpr std::uint32_t CameraHeadScale = 0x144;
    constexpr std::uint32_t CameraFocus = 0x100;
    constexpr std::uint32_t CameraFOV = 0x134;
    constexpr std::uint32_t Brightness = 0x11c;
    constexpr std::uint32_t FogEnd = 0x12c;
    constexpr std::uint32_t GlobalShadows = 0x138;
    constexpr std::uint32_t ClientDimensions = 0x720;
    constexpr std::uint32_t ViewMatrix = 0x4b0;
    constexpr std::uint32_t AbsolutePosition = 0x100;
    constexpr std::uint32_t AbsoluteSize = 0x108;
    constexpr std::uint32_t Value = 0xc0;
    constexpr std::uint32_t TextLabelColor3 = 0xaa0;
    constexpr std::uint32_t TextLabelText = 0x9f8;
    constexpr std::uint32_t Adornee = 0xc0;
    constexpr std::uint32_t MouseSensitivity = 0x22c;
    constexpr std::uint32_t InputObject = 0xf0;
    constexpr std::uint32_t MousePosition = 0xdc;
}
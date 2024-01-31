//
// Copyright 2017-2023 Valve Corporation.
//

#pragma once

#include "SteamAudioEditorModule.h"
#include "ComponentVisualizer.h"

class FPrimitiveDrawInterface;
class FSceneView;


namespace SteamAudio {

// ---------------------------------------------------------------------------------------------------------------------
// FSteamAudioBakedSourceComponentVisualizer
// ---------------------------------------------------------------------------------------------------------------------

class FSteamAudioBakedSourceComponentVisualizer : public FComponentVisualizer
{
public:
    virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
};

}

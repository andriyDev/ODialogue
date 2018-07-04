
#pragma once

#include "CoreMinimal.h"

#include "OFSMComponent.h"
#include "DialogueNode.h"
#include "DialogueEdge.h"

#include "DialogueComponent.generated.h"

UCLASS()
class ODIALOGUE_API UDialogueComponent : public UOFSMComponent
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, Category = "OFSM")
        UDialogueNode* GetCurrentPhrase();

    UFUNCTION(BlueprintPure, Category = "OFSM")
        TArray<UDialogueEdge*> GetAllowedResponses();

    UFUNCTION(BlueprintCallable, Category = "OFSM")
        void UseResponse(UDialogueEdge* Edge);
};


#pragma once

#include "CoreMinimal.h"

#include "OFSMEdge.h"

#include "DialogueEdge.generated.h"

UCLASS()
class ODIALOGUE_API UDialogueEdge : public UOFSMEdge
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dialogue")
        FText YourPhrase;
};

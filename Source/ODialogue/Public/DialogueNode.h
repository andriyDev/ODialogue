
#pragma once

#include "CoreMinimal.h"

#include "OFSMNode.h"

#include "DialogueNode.generated.h"

UCLASS()
class ODIALOGUE_API UDialogueNode : public UOFSMNode
{
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dialogue")
        FText TheirPhrase;
};

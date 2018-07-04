
#include "DialogueComponent.h"

UDialogueNode* UDialogueComponent::GetCurrentPhrase()
{
    return Cast<UDialogueNode>(State);
}

TArray<UDialogueEdge*> UDialogueComponent::GetAllowedResponses()
{
    TArray<UOFSMEdge*> Edges = GetValidTransitions();
    TArray<UDialogueEdge*> Responses;
    for(UOFSMEdge* Edge : Edges)
    {
        UDialogueEdge* resp = Cast<UDialogueEdge>(Edge);
        if(resp)
        {
            Responses.Add(resp);
        }
    }
    return Responses;
}

void UDialogueComponent::UseResponse(UDialogueEdge* Edge)
{
	if (Edge->StartNode != State)
	{
		UE_LOG(LogTemp, Error, TEXT("Trying to use invalid response: Not from this state."));
		return;
	}
	State = Edge->EndNode;
}

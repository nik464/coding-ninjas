


void evenodd(node* head)
{
    node*odd=head;
    node*even=head->next;
    node*evenstart=even;

    while(odd->next!=NULL && even ->next !=NULL)
    {
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;
    }

    odd->next=evenstart;
    if(odd->next!=NULL)
    even->next=NULL;

}
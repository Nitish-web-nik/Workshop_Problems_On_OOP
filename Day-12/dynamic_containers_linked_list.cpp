//Linked List representation ALGORITHMS
struct numeric_item
{
    int value_;
    struct numeric_item *next_;
};
//Visiting items recursively
void print_recursive(numeric_item *p)
{
    if(p==nullptr)
    {
        cout<<endl;
    }
    else
    {
        cout<<p->value_<<" ";
        print_recursive(p->next_);
    }

}
//visiting items non-recursively or iterative approach
void print(numeric_item *p)
{
    while(p!= nullptr)
    {
        cout<<p->value_<<" ";
        p = p->next_;
    }
    cout<<endl;

}
//Finding Item
numeric_item ** pp = &head;
/*pointer to pointer is used to generate a new link
to generate a link before element founded to use as adding or removing items*/
while((*pp)!= nullptr && (*pp)->value_ != v);
{
    pp = &((*pp)->next_);
}
//Adding Item
newp->next= *pp;
*pp = newp->next;
//Deleting Item
while(head != nullptr)
{
    numeric_item *p = head;
    head = head->next;
    delete p;
}

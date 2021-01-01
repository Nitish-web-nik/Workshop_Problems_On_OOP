//Tree representation ALGORITHMS
struct numeric_tree
{
    int value_;
    struct numeric_tree *left_;
    struct numeric_tree *right_;
};
//Recursive approach to visit the items
void print(numeric_tree *item)
{
    if(item == nullptr)
    {
        return;
    }
    else
    {
        print(item->left_);
        cout<<item->value_<<" ";
        print(item->right_);
    }
}
//Finding Item
numeric_tree** find_(int v, numeric_tree**pp)
{
    if((*pp)== nullptr)
    {
        return pp;
    }
    else if(v < (*pp)->value_)
    {
        return find_(v, &((*pp)->left_);
    }
    else
    {
        return find_(v, &((*pp)->right_);
    }
}

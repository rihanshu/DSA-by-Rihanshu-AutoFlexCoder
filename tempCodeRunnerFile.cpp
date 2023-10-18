int pow(int two,int count){
    int i=0,product=1;
    while(i<count){
        product=product*two;
        i++;
    }
    return product;
}

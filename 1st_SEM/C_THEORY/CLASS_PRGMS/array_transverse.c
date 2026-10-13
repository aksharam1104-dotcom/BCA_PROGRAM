#include<stdio.h>
int main(){
    int arraysize=read_array_size();
    int isvalid=validate_array_size(arraysize);
    
    int read_array_size(){
    int size;
    printf("ENTER THE SIZE OF THE ARRAY[>4]:");
    scanf("&d",&size);
    return size;
}
int validate_array_size(int array_size){
    if (array_size>4)
    return 1;

        
}
int initialize_array();

}

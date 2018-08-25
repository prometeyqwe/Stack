public class Stack {

    private int[] arr;
    private int top;


    Stack(int size){
        arr = new int[size];
        top = -1;
    }

    public void push(int x){
        arr[++top] = x;
    }

    public int pop(){return arr[top--];}

    public boolean isEmpty(){return top==-1;}

    public int top(){return arr[top];}

    public void display(){
        for(int i=0; i < arr.length; i++)
            System.out.print(arr[i]+" ");
        System.out.println();
    }
}

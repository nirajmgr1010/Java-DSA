public class Bst {

    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data = data;
        }
    }

    public static Node insert(Node root, int data){
        if(root == null){
             root = new Node(data);
             return root;
        }

        if(root.data > data){
            //left subtree
            root.left = insert(root.left, data);
        }

        else{
            root.right = insert(root.right, data);
        }
        return root;
    }

  public static boolean Search(Node root, int key){
    
    if(root == null){
        return false;
    }
    
    if(root.data > key){
        return Search(root.left, key);
    }
    else if(root.data   == key){
        return true;
    }
    else{
        return Search(root.right, key);
    }
  }

    public static void inOrder(Node root){
        if(root == null){
            return;
        }
        inOrder(root.left);
        System.out.println(root.data+" ");
        inOrder(root.right);
    }
     public static void main(String[] args) {
        int values[] = {5,1,3,4,2,7};
        Node root = null;

        for(int i=0; i<values.length; i++){
            root = insert(root, values[i]);
        }

        inOrder(root);
     }
}

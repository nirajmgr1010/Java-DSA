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

  public static Node delete(Node root, int val){
    if(root.data > val){
        root.left = delete(root.left,val);
    }
    else if(root.data < val){
        root.right = delete(root.right, val);
    }else{ //root.data == val
     //case 1 no child
     if(root.left == null && root.right == null){
        return null;
     }

     //case 2- one child delete
     if(root.left == null){
        return root.right;
     }
    else if(root.right == null){
        return root.left;
     }

     //case 3 - two child
      Node IS = InorderSuccessor(root.right);
      root.data = IS.data;
      root.right = delete(root.right, IS.data);

    }
    return root;
  }


  public static Node InorderSuccessor(Node root){
   if(root.left != null){
    root = root.left;
   }
   return root;
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
        int values[] = {8,5,3,1,4,6,10,11,14};
        Node root = null;

        for(int i=0; i<values.length; i++){
            root = insert(root, values[i]);
        }

        // inOrder(root);
        // System.out.println();

        delete(root, 4); //which has no child
        inOrder(root);
        delete(root, 10); //which has single child
        inOrder(root);
        delete(root, 5); // which has two children
        inOrder(root);
     }
}

import java.util.*;
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

 //Print in range 
    public static void printInRange(Node root, int X,int Y){
        if(root == null){
            return;
        }
        if(root.data >= X && root.data <= Y){
            printInRange(root.left, X, Y);
            System.out.println(root.data+" ");
            printInRange(root.right, X, Y);
        }
        else if(root.data >= Y){
            printInRange(root.left, X, Y);
        }
        else{
            printInRange(root.right, X, Y);
        }
    }

 //Road to leaf paths
public static void printPath(ArrayList<Integer> path){
    for(int i=0; i<path.size(); i++){
        System.out.println(path.get(i)+"->");
    }
    System.out.println();
}

 public static void printRoot2Leaf(Node root, ArrayList<Integer> path){
    if(root == null){
        return;
    }
    path.add(root.data);
    //leaf
    if(root.left == null && root.right == null){
     printPath(path);
    }else{ //non-leaf
  printRoot2Leaf(root.left, path);
     printRoot2Leaf(root.right, path);
    }
     path.remove(path.size()-1); //delete last node
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

        // delete(root, 4); //which has no child
        // inOrder(root);
        // delete(root, 10); //which has single child
        // inOrder(root);
        // delete(root, 5); // which has two children
        // inOrder(root);

        printInRange(root, 6, 10);
     }
}

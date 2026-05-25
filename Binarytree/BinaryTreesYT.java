import java.util.LinkedList;
import java.util.Queue;

public class BinaryTreesYT{
    static class Node{
        int data;
        Node left;
        Node right;  

        Node(int data){
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    static class BinaryTree{
        static int idx = -1;
        public static Node buildTree(int nodes[]){
            idx++;
            if(nodes[idx] == -1){
                return null;
            }

            Node newNode = new Node(nodes[idx]);
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);

            return newNode;
        }
    }

    public static void preorder(Node root){
     
    if(root == null){
        return;
    }
     System.out.println(root.data+" ");
     preorder(root.left);
     preorder(root.right);
    }

    public static void levelOrder(Node root){
        if(root == null){
             return;
        }
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        while(!q.isEmpty()){
            Node currNode = q.remove();
            if(currNode == null){
                System.out.println();
                if(q.isEmpty()){
                    break;
                }else{
                    q.add(null);
                }
            }else{
                System.out.println(currNode.data+" ");
                if(currNode.left != null){
                    q.add(currNode.left);
                }
                if(currNode.right != null){
                    q.add(currNode.right);
                }
            }
        }
    }

    public static int CountOfNodes(Node root){
        if(root == null){
            return 0;
        }
        int leftNodes = CountOfNodes(root.left);
        int rightNodes = CountOfNodes(root.right);

        return leftNodes+rightNodes+1;
    }

    public static int sumOfNodes(Node root){
        if(root == null){
            return 0;
        }
        int leftSum = sumOfNodes(root.left);
        int rightSum = sumOfNodes(root.right);

        return leftSum + rightSum + root.data;
    }

   public static int height(Node root){
    if(root == null){
        return 0;
    }
    int leftHeight = height(root.left);
    int rightHeight = height(root.right);

    int myHeight = Math.max(leftHeight, rightHeight) + 1;

    return myHeight;
   }
    public static int diameter(Node root){
          if(root == null){
            return 0;
          }
          int diam1 = diameter(root.left);
          int diam2 = diameter(root.right);
          int diam3 = height(root.left) + height(root.right) + 1;
          return Math.max(diam3, Math.max(diam1, diam2));
    }
    public static void main(String[] args) {
        int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        BinaryTree tree = new BinaryTree();
        Node root = tree.buildTree(nodes);
        System.out.println(root.data);


        preorder(root);
        levelOrder(root);
        System.out.println("\n");
        System.out.println(CountOfNodes(root));
         System.out.println("\n");
        System.out.println(sumOfNodes(root));


        }
}


/*
桶数的确定（假设划分了 n 个区间）：
方法一：
       max-min=n * width；
其中，max，min 是输入数据的最大值最小值，n是子区间个数，width是子区间宽度。
这样划分后，每个数据x对应的桶的编号（0 ~ n-1）就是；
index = (x - min) / width = (x - min) / (max - min) * n

方法二：
      当我们取n=Array.length时，相应的每个数据的存放的桶的编号也就确定了：
      index = (x - min) / (max - min) * (max-min) / Array.length
            = (x - min) / Array.length;
*/
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] strs = br.readLine().split(" ");
        int n = strs.length;
        int[] a = new int[n];
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            a[i]=Integer.parseInt(strs[i]);
            min=Math.min(min,a[i]);
            max=Math.max(max,a[i]);
        }

        int BucketNum=(max-min)/n+1;
        List<ArrayList<Integer>> Bucketlist = new ArrayList<>(BucketNum);
        for(int i=0;i<BucketNum;i++){
            Bucketlist.add(new ArrayList<>());
        }

        //将元素依次放入对应的桶中
        int index;
        for(int i=0;i<n;i++){
            index=(int)(a[i]-min)/n;
            Bucketlist.get(index).add(a[i]);
        }

        //对每一个桶排序
        for(int i=0;i<BucketNum;i++){
            Collections.sort(Bucketlist.get(i));
        }
        System.out.println(Bucketlist);
    }
}
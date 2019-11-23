


//https://www.nowcoder.com/practice/661c49118ca241909add3a11c96408c8?tpId=85&tqId=29830&tPage=1&rp=1&ru=/ta/2017test&qru=/ta/2017test/question-ranking
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {

            int n = sc.nextInt();  //总人数
            int[] arr = new int[n + 1]; //学生能力值数组，第i个人直接对应arr[i]

            for (int i = 1; i <= n; i++) {//初始化 人直接对应坐标
                arr[i] = sc.nextInt();
            }

            int kk = sc.nextInt(); //选择的学生数
            int dd = sc.nextInt(); //间距

            /**
             * 递推的时候，以f[one][k]的形式表示
             * 其中：one表示最后一个人的位置，k为包括这个人，一共有k个人
             * 原问题和子问题的关系：f[one][k]=max{f[left][k-1]*arr[one],g[left][k-1]*arr[one]}
             */

            //规划数组
            long[][] fmax = new long[n + 1][kk + 1];//人直接对应坐标,n和kk都要+1
            long[][] fmin = new long[n + 1][kk + 1];

            //初始化k=1的情况
            for (int one = 1; one <= n; one++) {
                fmax[one][1] = arr[one];
                fmin[one][1] = arr[one];
            }

            //自底向上递推
            for (int k = 2; k <= kk; k++) {
                for (int one = k; one <= n; one++) {
                    long tempmax = Long.MIN_VALUE;
                    long tempmin = Long.MAX_VALUE;
                    for (int left = Math.max(k - 1, one - dd); left <= one - 1; left++) {
                        tempmax = Math.max(tempmax, Math.max(fmax[left][k - 1] * arr[one], fmin[left][k - 1] * arr[one]));
                        tempmin = Math.min(tempmin, Math.min(fmax[left][k - 1] * arr[one], fmin[left][k - 1] * arr[one]));
                    }
                    fmax[one][k] = tempmax;
                    fmin[one][k] = tempmin;
                }
            }

            //n选k最大的需要从最后一个最大的位置选
            long result = Long.MIN_VALUE;
            for (int one = kk; one <= n; one++) {
                if (result < fmax[one][kk]) {
                    result = fmax[one][kk];
                }
            }
            System.out.println(result);
        }
    }
}
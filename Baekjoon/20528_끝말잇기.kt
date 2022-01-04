import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    val a=readLine().split(' ')
    val c=a[0][0]
    for(i in 0..n-1){
        if(a[i][0]!=c){
            print(0)
            return
        }
        for(j in 0..a[i].length/2){
            if(a[i][j]!=a[i][a[i].length-j-1]){
                print(0)
                return
            }
        }
    }
    print(1)
}
import java.io.*
import java.lang.Integer.min

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine()
    val a = readLine().split(' ').map { it.toInt() }
    var ans = Int.MAX_VALUE
    var p=0
    var r=Int.MAX_VALUE
    for(i in 0..a.size-1){
        if(a[i]==-1){
            p=i
            break
        }
        ans=min(a[i],ans)
    }
    for(i in p+1..a.size-1){
        r=min(a[i],r)
    }
    print(ans+r)
}

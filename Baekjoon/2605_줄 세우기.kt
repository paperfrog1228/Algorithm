import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n=readLine().toInt()
    var a: List<Int> =readLine().split(' ').map { it.toInt() }
    var ans= mutableListOf<Int>()
    for(i in 1..n)
        ans.add(ans.size-a[i-1],i)
    for(i in 0..n-1)
    print("${ans[i]} ")
}
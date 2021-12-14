import java.io.*
fun main(args: Array<String>) = with (BufferedReader(InputStreamReader(System.`in`))) {
    var a= readLine().split(' ').map{it.toInt()}
    var b= arrayOf(1,1,2,2,2,8)
    for (i in 0..5)
    print(""+(b[i]-a[i])+" ")
}
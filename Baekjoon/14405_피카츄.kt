import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var s=readLine()
    val regex="(pi|ka|chu)+".toRegex()
    if(s.matches(regex)) println("YES")
    else println("NO")
}
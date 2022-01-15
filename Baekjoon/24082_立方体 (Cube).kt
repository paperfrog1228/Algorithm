import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
   val n=readLine().toInt()
   println(n*n*n)
}

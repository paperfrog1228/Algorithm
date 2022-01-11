import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    val n = readLine().toInt()
    repeat(n) {
        var ans:Long= 0
        var tmp:Long= 3
        val a = readLine().toInt()
        for(i in 1..a){
            ans+=i*tmp
            tmp+=i+2
        }
        println(ans)
    }
}


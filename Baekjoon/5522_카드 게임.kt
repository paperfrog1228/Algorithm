import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var br = BufferedReader(
        InputStreamReader(System.`in`)
    )
    var ans=0
    while(true){
        val a=br.readLine()?:break
        ans+=a.toInt()
    }
    print(ans)
}
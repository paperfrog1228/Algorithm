import java.io.*
fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    while(true) {
        val s = readLine()
        if(s=="0") return
        var a = 1
        for (i in 0..s.length-1) {
            if (s[i] == '1') a +=2
            else if(s[i]=='0') a+=4
            else a += 3
            a+=1
        }
        println(a)
    }
}
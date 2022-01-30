import java.io.*

fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
   val n = readLine().toInt()
   repeat(n) {
      val a=readLine()
      val b=(a.reversed().toInt()+a.toInt()).toString()
      var no=false
      for(i in 0..b.length-1){
         if(b[i]!=b[b.length-1-i]){
            println("NO")
            no=true
            break
         }
      }
      if(!no)
      println("YES")
   }
}

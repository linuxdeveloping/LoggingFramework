
<h1>C Logging Framework </h1>

<p> You can link this code snippet just to your project or create a shared libary and link your code against this</p>

<h2>Creating a shared libary </h2>

<p> with the following command you can create a shared libary out of the code snippets</p>

<b>
bash$> gcc -c -fPIC logger.c -o logger.o
bash$> gcc -shared logger.o -o libClogger.so
bash$> rm logger.o 
</b>

<p> now copy logger.so into the directory where your linux distro stores the shared libaries
<br/> when you want to link the shared libary now you just have to type ..
</p>

<b>
bash$> gcc [yourcode.c ...] -lClogger 
</b>

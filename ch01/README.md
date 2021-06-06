## ch01
In the first chapter, what mainly I knew is how to start a basic cpp code. I learned cpp very fastly like I learned other code langeages because they have same logic and similar syntax.

I also encountered some noteworthy code here. There is an example in eg05.cpp:
```cpp
    int sum = 0, val = 0;
	while (cin >> val)
	{
		sum += val;
	}
	cout << "Sum is: " << sum << endl;
```
**When using an istream object as the judgement condition, the effect is to detect the state of stream. If the stream is valid, then the detection is successful. However, when the code get an end-of-file or invalid input from stream, the state of istream object will be invalid. Then the judgement condition will get false.**

C++ Primer tell us this. However, when I debug this programme in visual studio 2015, I find that when I input an invalid input, this programme will terminate directly, instead of the condition being judged to be false, and then continue to run down.
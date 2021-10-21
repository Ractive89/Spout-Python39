# Spout Python39
Python的Spout协议库
基于https://github.com/spiraltechnica/Spout-for-Python
使用Boost::Python修改的Spout库，适配于Python3.9版本。

# 使用
```
# import library
from Library.Spout import Spout

def main() :
    # create spout object
    spout = Spout(silent = True)
    # create receiver
    spout.createReceiver('input')
    # create sender
    spout.createSender('output')

    while True :
        spout.check()
        data = spout.receive()
        spout.send(data)
    
if __name__ == "__main__":
    main()

```

# 参数
Sender和Receiver的参数可以在 `Library/Spout.py` 里查看。
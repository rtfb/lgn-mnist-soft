
### Setup

```
virtualenv venv
source venv/bin/activate
pip install -r requirements.txt
```

Clone repo with datafiles and checkout the right branch:
```
git clone git@github.com:rejunity/tt10-lgn-mnist.git
cd tt10-lgn-mnist
git checkout origin/sky130-5x4
cd ..
```

### Run

```
python do.py > main.c
gcc main.c
./a.out
```

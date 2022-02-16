class Test:
    def __init__(self, name):
        self.name = name
        self.result = None
        self.error = None
    def checkFile(self, file):
        try:
            with open(file, 'r') as f:
                self.result = f.read()
        except Exception as e:
            self.error = e

def lambda_handler(event, context):
    return "Hello, World!"


if __name__ == "__main__":
    result = lambda_handler({}, None)
    print(result)

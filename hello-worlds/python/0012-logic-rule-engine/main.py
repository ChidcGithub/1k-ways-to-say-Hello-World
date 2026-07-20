def forward_chain(facts, rules):
    inferred = list(facts)
    changed = True
    while changed:
        changed = False
        for rule in rules:
            result = rule(inferred)
            if result is not None and result not in inferred:
                inferred.append(result)
                changed = True
    return inferred


def rule_combine_greeting(facts):
    greeting = next((v for k, v in facts if k == "greeting"), None)
    punctuation = next((v for k, v in facts if k == "punctuation"), None)
    if greeting is not None and punctuation is not None:
        return ("message", greeting + punctuation)
    return None


if __name__ == "__main__":
    facts = [("greeting", "Hello"), ("punctuation", ", World!")]
    rules = [rule_combine_greeting]
    inferred = forward_chain(facts, rules)
    message = next(v for k, v in inferred if k == "message")
    print(message)

---
id: 0408
language: haskell
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Uses RecordWildCards to bring all record fields into scope implicitly."
author: ChidcGithub
date: 2026-07-25
---

# #0408 Haskell RecordWildCards

## Description

RecordWildCards brings all fields of a record into scope. Greeting{..} destructures and makes hello and world available as local bindings without listing fields.

## Source Code

Main.hs:

```haskell
{-# LANGUAGE RecordWildCards #-}

data Greeting = Greeting { hello :: String, world :: String }

main :: IO ()
main = do
    let Greeting{..} = Greeting "Hello" "World!"
    putStrLn $ hello ++ ", " ++ world
```

## Run

```bash
cd hello-worlds/haskell/0408-record-wildcards
runhaskell Main.hs
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | haskell | GHC with RecordWildCards |
| paradigm | functional | Record wildcard destructuring |
| output | stdout | putStrLn |
| platform | cli | Terminal |
| era | contemporary | RecordWildCards (GHC 6.8+) |
| tags | [] | No special technique |

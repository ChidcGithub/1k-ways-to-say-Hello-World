{-# LANGUAGE DerivingVia #-}
{-# LANGUAGE GeneralizedNewtypeDeriving #-}

newtype Greeting = Greeting String
    deriving (Semigroup, Monoid) via String

main :: IO ()
main = putStrLn $ let Greeting g = Greeting "Hello, " <> Greeting "World!" in g

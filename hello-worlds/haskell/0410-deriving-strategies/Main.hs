{-# LANGUAGE DerivingStrategies #-}
{-# LANGUAGE GeneralizedNewtypeDeriving #-}

newtype Greeting = Greeting String
    deriving stock Show
    deriving newtype (Semigroup, Monoid)

main :: IO ()
main = putStrLn $ show $ Greeting "Hello, " <> Greeting "World!"

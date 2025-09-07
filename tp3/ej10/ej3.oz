declare
fun lazy {NatsFrom N}
   N | {NatsFrom N+1}
end

local Nats in
   Nats = {NatsFrom 1}
   {Browse Nats.1}
end
